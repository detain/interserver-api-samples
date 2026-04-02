const utils = require('../utils/utils');
const HomeDetailsModulesBackups = require('../models/HomeDetailsModulesBackups');
const HomeDetailsModulesDomains = require('../models/HomeDetailsModulesDomains');
const HomeDetailsModulesLicenses = require('../models/HomeDetailsModulesLicenses');
const HomeDetailsModulesQuickservers = require('../models/HomeDetailsModulesQuickservers');
const HomeDetailsModulesServers = require('../models/HomeDetailsModulesServers');
const HomeDetailsModulesVps = require('../models/HomeDetailsModulesVps');
const HomeDetailsModulesWebhosting = require('../models/HomeDetailsModulesWebhosting');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...HomeDetailsModulesDomains.fields(`${keyPrefix}domains`, isInput),
            ...HomeDetailsModulesWebhosting.fields(`${keyPrefix}webhosting`, isInput),
            ...HomeDetailsModulesVps.fields(`${keyPrefix}vps`, isInput),
            ...HomeDetailsModulesLicenses.fields(`${keyPrefix}licenses`, isInput),
            ...HomeDetailsModulesBackups.fields(`${keyPrefix}backups`, isInput),
            ...HomeDetailsModulesServers.fields(`${keyPrefix}servers`, isInput),
            ...HomeDetailsModulesQuickservers.fields(`${keyPrefix}quickservers`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'domains': utils.removeIfEmpty(HomeDetailsModulesDomains.mapping(bundle, `${keyPrefix}domains`)),
            'webhosting': utils.removeIfEmpty(HomeDetailsModulesWebhosting.mapping(bundle, `${keyPrefix}webhosting`)),
            'vps': utils.removeIfEmpty(HomeDetailsModulesVps.mapping(bundle, `${keyPrefix}vps`)),
            'licenses': utils.removeIfEmpty(HomeDetailsModulesLicenses.mapping(bundle, `${keyPrefix}licenses`)),
            'backups': utils.removeIfEmpty(HomeDetailsModulesBackups.mapping(bundle, `${keyPrefix}backups`)),
            'servers': utils.removeIfEmpty(HomeDetailsModulesServers.mapping(bundle, `${keyPrefix}servers`)),
            'quickservers': utils.removeIfEmpty(HomeDetailsModulesQuickservers.mapping(bundle, `${keyPrefix}quickservers`)),
        }
    },
}
