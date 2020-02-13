//
// Created by florian on 31/01/2020.
//

#ifndef RAISE_AUDIO_HPP
#define RAISE_AUDIO_HPP

#include <SFML/Audio/Sound.hpp>
#include <vector>
#include <string>
#include <iostream>
#include "../Classes/Component.hpp"

namespace Components {
	class Audio : public Component {
		public:
			Audio();
			~Audio();
			void AddSound(const sf::Sound &sound);
			sf::Sound &GetSound(size_t idx);
			void PlaySound(size_t idx, bool loop = false);
			void PlayAll(bool loop = false);
			void StopAll();
		private:
			std::vector<sf::Sound> _sounds;
	};
}
#endif //RAISE_AUDIO_HPP
