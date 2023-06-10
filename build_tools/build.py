import os
import git

THIRD_PART_PATH = '3rdPart'

if __name__ == '__main__':
    if os.path.exists(THIRD_PART_PATH):
        os.remove(THIRD_PART_PATH)
    os.mkdir(THIRD_PART_PATH)

    git.Repo.clone_from(url='https://github.com/libsdl-org/SDL.git',
                        to_path=os.path.join(THIRD_PART_PATH, 'SDL')) \
        .create_head('release-2.26.5', 'release-2.26.5') \
        .checkout()
