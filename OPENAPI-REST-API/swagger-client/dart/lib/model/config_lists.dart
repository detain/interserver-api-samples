part of swagger.api;

class ConfigLists {
  
  Map<String, Cpu> cpuLi = {};

  Map<String, Map<String, MemoryOption>> memoryLi = {};

  Map<String, Map<String, HardDrive>> hdLi = {};

  Map<String, Bandwidth> bandwidthLi = {};

  Map<String, IpBlock> ipsLi = {};

  Map<String, OperatingSystem> osLi = {};

  Map<String, ControlPanel> cpLi = {};

  List<RaidOption> raidLi = [];

  ConfigLists();

  @override
  String toString() {
    return 'ConfigLists[cpuLi=$cpuLi, memoryLi=$memoryLi, hdLi=$hdLi, bandwidthLi=$bandwidthLi, ipsLi=$ipsLi, osLi=$osLi, cpLi=$cpLi, raidLi=$raidLi, ]';
  }

  ConfigLists.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    cpuLi = Cpu.mapFromJson(json['cpu_li']);
    memoryLi = Map.mapFromJson(json['memory_li']);
    hdLi = Map.mapFromJson(json['hd_li']);
    bandwidthLi = Bandwidth.mapFromJson(json['bandwidth_li']);
    ipsLi = IpBlock.mapFromJson(json['ips_li']);
    osLi = OperatingSystem.mapFromJson(json['os_li']);
    cpLi = ControlPanel.mapFromJson(json['cp_li']);
    raidLi = RaidOption.listFromJson(json['raid_li']);
  }

  Map<String, dynamic> toJson() {
    return {
      'cpu_li': cpuLi,
      'memory_li': memoryLi,
      'hd_li': hdLi,
      'bandwidth_li': bandwidthLi,
      'ips_li': ipsLi,
      'os_li': osLi,
      'cp_li': cpLi,
      'raid_li': raidLi
     };
  }

  static List<ConfigLists> listFromJson(List<dynamic> json) {
    return json == null ? new List<ConfigLists>() : json.map((value) => new ConfigLists.fromJson(value)).toList();
  }

  static Map<String, ConfigLists> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, ConfigLists>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new ConfigLists.fromJson(value));
    }
    return map;
  }
}
