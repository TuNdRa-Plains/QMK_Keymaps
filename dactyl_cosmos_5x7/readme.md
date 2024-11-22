# handwired/dactyl_cosmos_5x7

Generated with RyanIsCool's [Cosmos Keyboard Generator](https://ryanis.cool/cosmos/beta#cm:CrUBCg8SBRCAPyAnEgASABIAOEUKDxIFEIBLICcSABIAEgA4MQocEgUQgFcgJxIAEgASAxCwLxIDELBfOB1AivC8AgoXEgUQgGMgJxIAEgASAxCwOxIDELBrOAkKFRIFEIBvICcSABIAEgA4CkCGhorABwofEgIgJxIAEgcQoE5AgIAIEgYQMECAgAg4HkCQhoqwBwoSEgIgJxIAEgASADgyQJqGirAHGABA+ouAr5CSAUjejKvAAQpnCgoSBRBAUPICOMAMCgsSBhDAgAIgKDioFAoJEgQQQCAoOJAcCgsSBhBAIChAADj4IwoYEhIQQCAAMMgBQICAgA1IgICwrAEwFjgAGAoiCgjIARDIARgAIABA25GknPA3SISPlNageAqSAQoXEhMQwMACQICEkAJIwpmclaC8AVBDOAcKFRIQEEBAgIAYSNCV/Nyg9QNQC1CdAgoWEhIQQECEjNQCSMKZnJWgvAFQhgFQOQoVEhAQQECEhPABSOaZgKygC1BXUIABChUSEBBAQIWMrANI8JnQteAwUHRQlgEYAyIJCNIBENIBIMIDQMyLhKTQMUitkeCNsZMGEAYYgiAiBgjcARDXATgGggECBAJoAA==)

* Keyboard Maintainer: [TuNdRa_plains](https://github.com/TuNdRa_plains)
* Hardware Supported: SeaPicro RP2040

Make example for this keyboard (after setting up your build environment):

    make handwired/dactyl_cosmos_5x7:default

Flashing example for this keyboard:

    make handwired/dactyl_cosmos_5x7:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
