const utils = require('../utils/utils');
const Bandwidth = require('../models/Bandwidth');
const ControlPanel = require('../models/ControlPanel');
const Cpu = require('../models/Cpu');
const HardDrive = require('../models/HardDrive');
const IpBlock = require('../models/IpBlock');
const MemoryOption = require('../models/MemoryOption');
const OperatingSystem = require('../models/OperatingSystem');
const RaidOption = require('../models/RaidOption');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...Cpu.fields(`${keyPrefix}cpu_li`, isInput),
            {
                key: `${keyPrefix}memory_li`,
                label: `[${labelPrefix}memory_li]`,
                type: 'object',
            },
            {
                key: `${keyPrefix}hd_li`,
                label: `[${labelPrefix}hd_li]`,
                type: 'object',
            },
            ...Bandwidth.fields(`${keyPrefix}bandwidth_li`, isInput),
            ...IpBlock.fields(`${keyPrefix}ips_li`, isInput),
            ...OperatingSystem.fields(`${keyPrefix}os_li`, isInput),
            ...ControlPanel.fields(`${keyPrefix}cp_li`, isInput),
            {
                key: `${keyPrefix}raid_li`,
                label: `[${labelPrefix}raid_li]`,
                children: RaidOption.fields(`${keyPrefix}raid_li${!isInput ? '[]' : ''}`, isInput, true), 
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'cpu_li': utils.removeIfEmpty(Cpu.mapping(bundle, `${keyPrefix}cpu_li`)),
            'memory_li': bundle.inputData?.[`${keyPrefix}memory_li`],
            'hd_li': bundle.inputData?.[`${keyPrefix}hd_li`],
            'bandwidth_li': utils.removeIfEmpty(Bandwidth.mapping(bundle, `${keyPrefix}bandwidth_li`)),
            'ips_li': utils.removeIfEmpty(IpBlock.mapping(bundle, `${keyPrefix}ips_li`)),
            'os_li': utils.removeIfEmpty(OperatingSystem.mapping(bundle, `${keyPrefix}os_li`)),
            'cp_li': utils.removeIfEmpty(ControlPanel.mapping(bundle, `${keyPrefix}cp_li`)),
            'raid_li': utils.childMapping(bundle.inputData?.[`${keyPrefix}raid_li`], `${keyPrefix}raid_li`, RaidOption),
        }
    },
}
