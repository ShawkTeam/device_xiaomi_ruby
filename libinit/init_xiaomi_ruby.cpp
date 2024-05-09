/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t ruby_global_info = {
    .hwc_value = "",
    .sku_value = "ruby",

    .brand = "Redmi",
    .device = "ruby",
    .mod_device = "ruby_global",
    .marketname = "Redmi Note 12 Pro 5G",
    .model = "22101316G",
    .build_fingerprint = "Redmi/ruby_global/ruby:14/UP1A.230620.001/V816.0.3.0.UMOMIXM:user/release-keys"
};

static const variant_info_t rubypro_global_info = {
    .hwc_value = "",
    .sku_value = "rubypro",

    .brand = "Redmi",
    .device = "rubypro",
    .mod_device = "ruby_global",
    .marketname = "Redmi Note 12 Pro+ 5G",
    .model = "22101316UG",
    .build_fingerprint = "Redmi/rubypro_global/rubypro:14/UP1A.230620.001/V816.0.3.0.UMOMIXM:user/release-keys"
};

static const variant_info_t rubyplus_info = {
    .hwc_value = "",
    .sku_value = "rubyplus",

    .brand = "Redmi",
    .device = "rubyplus",
    .mod_device = "ruby",
    .marketname = "Redmi Note 12 DISCOVERY EDITION",
    .model = "22101316UC",
    .build_fingerprint = "Redmi/rubyplus_global/rubyplus:14/UP1A.230620.001/V816.0.3.0.UMOMIXM:user/release-keys"
};

static const std::vector<variant_info_t> variants = {
    ruby_global_info,
    rubypro_global_info,
    rubyplus_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
