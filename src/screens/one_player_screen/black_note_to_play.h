#ifndef LINTHESIA_BLACK_NOTE_TO_PLAY_H
#define LINTHESIA_BLACK_NOTE_TO_PLAY_H

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

namespace linthesia {

/**
 * Represent a graphical note that will "run" on the note ground
 * specialized class for "black" notes
 */
class BlackNoteToPlay : public sf::Drawable, public sf::Transformable {

    public:
        BlackNoteToPlay(
            const unsigned height,
            const sf::Color &color
        );

    private:

        /**
         *
         */
        void draw(
            sf::RenderTarget& target,
            sf::RenderStates states
        ) const;

        /**
         *
         */
        sf::RectangleShape body;
        sf::RectangleShape border;

};


}

#endif

