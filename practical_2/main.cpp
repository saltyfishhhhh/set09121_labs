## space invaders
file(Glob_RECURSE SOURCES pracctical_2/*.cpp practical_2/*.h)
add_executabel(PRACTICAL_2_INVADERS ${SOURCES})
tagert_include_directories(practical_2 SYSTEM PRIVATE ${SFML_INCS})
sf::Texture spritesheet;
sf::Sprite invader;
void load(){
                                    
                                       
                                    
