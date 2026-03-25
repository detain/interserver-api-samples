const utils = require('../utils/utils');
const Home_services_backups = require('../models/Home_services_backups');
const Home_services_domains = require('../models/Home_services_domains');
const Home_services_licenses = require('../models/Home_services_licenses');
const Home_services_servers = require('../models/Home_services_servers');
const Home_services_vps = require('../models/Home_services_vps');
const Home_services_webhosting = require('../models/Home_services_webhosting');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...Home_services_domains.fields(`${keyPrefix}domains`, isInput),
            ...Home_services_webhosting.fields(`${keyPrefix}webhosting`, isInput),
            ...Home_services_vps.fields(`${keyPrefix}vps`, isInput),
            ...Home_services_licenses.fields(`${keyPrefix}licenses`, isInput),
            ...Home_services_servers.fields(`${keyPrefix}servers`, isInput),
            ...Home_services_backups.fields(`${keyPrefix}backups`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'domains': utils.removeIfEmpty(Home_services_domains.mapping(bundle, `${keyPrefix}domains`)),
            'webhosting': utils.removeIfEmpty(Home_services_webhosting.mapping(bundle, `${keyPrefix}webhosting`)),
            'vps': utils.removeIfEmpty(Home_services_vps.mapping(bundle, `${keyPrefix}vps`)),
            'licenses': utils.removeIfEmpty(Home_services_licenses.mapping(bundle, `${keyPrefix}licenses`)),
            'servers': utils.removeIfEmpty(Home_services_servers.mapping(bundle, `${keyPrefix}servers`)),
            'backups': utils.removeIfEmpty(Home_services_backups.mapping(bundle, `${keyPrefix}backups`)),
        }
    },
}
