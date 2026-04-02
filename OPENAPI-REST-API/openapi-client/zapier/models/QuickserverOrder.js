const utils = require('../utils/utils');
const QuickserverOrder_distro_sel = require('../models/QuickserverOrder_distro_sel');
const QuickserverOrder_server_details = require('../models/QuickserverOrder_server_details');
const QuickserverOrder_templates = require('../models/QuickserverOrder_templates');
const QuickserverOrder_version = require('../models/QuickserverOrder_version');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}qs_id`,
                label: `Quickserver ID. - [${labelPrefix}qs_id]`,
                type: 'string',
            },
            ...QuickserverOrder_server_details.fields(`${keyPrefix}server_details`, isInput),
            ...QuickserverOrder_templates.fields(`${keyPrefix}templates`, isInput),
            ...QuickserverOrder_version.fields(`${keyPrefix}version`, isInput),
            ...QuickserverOrder_distro_sel.fields(`${keyPrefix}distro_sel`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'qs_id': bundle.inputData?.[`${keyPrefix}qs_id`],
            'server_details': utils.removeIfEmpty(QuickserverOrder_server_details.mapping(bundle, `${keyPrefix}server_details`)),
            'templates': utils.removeIfEmpty(QuickserverOrder_templates.mapping(bundle, `${keyPrefix}templates`)),
            'version': utils.removeIfEmpty(QuickserverOrder_version.mapping(bundle, `${keyPrefix}version`)),
            'distro_sel': utils.removeIfEmpty(QuickserverOrder_distro_sel.mapping(bundle, `${keyPrefix}distro_sel`)),
        }
    },
}
