const utils = require('../utils/utils');
const ServerOrderConfigIds = require('../models/ServerOrderConfigIds');
const ServerOrderFieldLabels = require('../models/ServerOrderFieldLabels');
const ServerOrderFormValues = require('../models/ServerOrderFormValues');
const ServerOrderRAID = require('../models/ServerOrderRAID');
const ServerOrder_bandwidth_li = require('../models/ServerOrder_bandwidth_li');
const ServerOrder_cp_li = require('../models/ServerOrder_cp_li');
const ServerOrder_cpu_li = require('../models/ServerOrder_cpu_li');
const ServerOrder_ips_li = require('../models/ServerOrder_ips_li');
const ServerOrder_memory_li = require('../models/ServerOrder_memory_li');
const ServerOrder_os_li = require('../models/ServerOrder_os_li');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...ServerOrderFormValues.fields(`${keyPrefix}form_values`, isInput),
            ...ServerOrderConfigIds.fields(`${keyPrefix}config_ids`, isInput),
            {
                key: `${keyPrefix}cpu`,
                label: `Number of CPUs for the server order. - [${labelPrefix}cpu]`,
                type: 'integer',
            },
            ...ServerOrderFieldLabels.fields(`${keyPrefix}field_label`, isInput),
            ...ServerOrder_cpu_li.fields(`${keyPrefix}cpu_li`, isInput),
            ...ServerOrder_memory_li.fields(`${keyPrefix}memory_li`, isInput),
            ...ServerOrder_bandwidth_li.fields(`${keyPrefix}bandwidth_li`, isInput),
            ...ServerOrder_ips_li.fields(`${keyPrefix}ips_li`, isInput),
            ...ServerOrder_os_li.fields(`${keyPrefix}os_li`, isInput),
            ...ServerOrder_cp_li.fields(`${keyPrefix}cp_li`, isInput),
            {
                key: `${keyPrefix}raid_li`,
                label: `[${labelPrefix}raid_li]`,
                children: ServerOrderRAID.fields(`${keyPrefix}raid_li${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'form_values': utils.removeIfEmpty(ServerOrderFormValues.mapping(bundle, `${keyPrefix}form_values`)),
            'config_ids': utils.removeIfEmpty(ServerOrderConfigIds.mapping(bundle, `${keyPrefix}config_ids`)),
            'cpu': bundle.inputData?.[`${keyPrefix}cpu`],
            'field_label': utils.removeIfEmpty(ServerOrderFieldLabels.mapping(bundle, `${keyPrefix}field_label`)),
            'cpu_li': utils.removeIfEmpty(ServerOrder_cpu_li.mapping(bundle, `${keyPrefix}cpu_li`)),
            'memory_li': utils.removeIfEmpty(ServerOrder_memory_li.mapping(bundle, `${keyPrefix}memory_li`)),
            'bandwidth_li': utils.removeIfEmpty(ServerOrder_bandwidth_li.mapping(bundle, `${keyPrefix}bandwidth_li`)),
            'ips_li': utils.removeIfEmpty(ServerOrder_ips_li.mapping(bundle, `${keyPrefix}ips_li`)),
            'os_li': utils.removeIfEmpty(ServerOrder_os_li.mapping(bundle, `${keyPrefix}os_li`)),
            'cp_li': utils.removeIfEmpty(ServerOrder_cp_li.mapping(bundle, `${keyPrefix}cp_li`)),
            'raid_li': utils.childMapping(bundle.inputData?.[`${keyPrefix}raid_li`], `${keyPrefix}raid_li`, ServerOrderRAID),
        }
    },
}
