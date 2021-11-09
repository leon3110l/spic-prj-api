#ifndef SCENE_MANAGER_H_
#define SCENE_MANAGER_H_

#include "Scene.hpp"

namespace spic {

    /**
     * @brief Class representing the SceneManager which holds the current scene.
     */
    class SceneManager {
        public:
            /**
             * @brief Create a Scene object
             * @spicapi
             * 
             * @return std::unique_ptr<Scene> 
             */
            static std::unique_ptr<Scene> CreateScene();

            /**
             * @brief Loads a scene to the active scene will unload current scene
             * @spicapi
             * 
             */
            static void LoadScene(std::unique_ptr<Scene> scene);

            /**
             * @brief Get the Active Scene object
             * @spicapi
             * 
             * @return Scene& 
             */
            static Scene& GetActiveScene();

        private:
            /**
             * @brief the active scene
             * @spicapi
             */
            static std::unique_ptr<Scene> active;

            /**
             * @brief unloads the active scene from memory
             * @spicapi
             */
            static void UnloadActiveScene();
    };

}

#endif // SCENE_MANAGER_H_