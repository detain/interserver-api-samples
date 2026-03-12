part of swagger.api;

class CpuWithDefaults {
  
  MemoryOption memoryDet = null;

  HardDrive hdDet = null;

  String monthlyFee = null;

  int id = null;

  String shortDesc = null;

  String longDesc = null;

  String type = null;

  String speed = null;

  String numCores = null;

  String numCpus = null;

  String benchmark = null;

  double monthlyPrice = null;

  String monthlyPriceDisplay = null;

  String maxRam = null;

  String minRam = null;

  String maxLff = null;

  String maxSff = null;

  String maxNve = null;

  String visible = null;

  String active = null;

  CpuWithDefaults();

  @override
  String toString() {
    return 'CpuWithDefaults[memoryDet=$memoryDet, hdDet=$hdDet, monthlyFee=$monthlyFee, id=$id, shortDesc=$shortDesc, longDesc=$longDesc, type=$type, speed=$speed, numCores=$numCores, numCpus=$numCpus, benchmark=$benchmark, monthlyPrice=$monthlyPrice, monthlyPriceDisplay=$monthlyPriceDisplay, maxRam=$maxRam, minRam=$minRam, maxLff=$maxLff, maxSff=$maxSff, maxNve=$maxNve, visible=$visible, active=$active, ]';
  }

  CpuWithDefaults.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    memoryDet = new MemoryOption.fromJson(json['memory_det']);
    hdDet = new HardDrive.fromJson(json['hd_det']);
    monthlyFee = json['monthly_fee'];
    id = json['id'];
    shortDesc = json['short_desc'];
    longDesc = json['long_desc'];
    type = json['type'];
    speed = json['speed'];
    numCores = json['num_cores'];
    numCpus = json['num_cpus'];
    benchmark = json['benchmark'];
    monthlyPrice = json['monthly_price'];
    monthlyPriceDisplay = json['monthly_price_display'];
    maxRam = json['max_ram'];
    minRam = json['min_ram'];
    maxLff = json['max_lff'];
    maxSff = json['max_sff'];
    maxNve = json['max_nve'];
    visible = json['visible'];
    active = json['active'];
  }

  Map<String, dynamic> toJson() {
    return {
      'memory_det': memoryDet,
      'hd_det': hdDet,
      'monthly_fee': monthlyFee,
      'id': id,
      'short_desc': shortDesc,
      'long_desc': longDesc,
      'type': type,
      'speed': speed,
      'num_cores': numCores,
      'num_cpus': numCpus,
      'benchmark': benchmark,
      'monthly_price': monthlyPrice,
      'monthly_price_display': monthlyPriceDisplay,
      'max_ram': maxRam,
      'min_ram': minRam,
      'max_lff': maxLff,
      'max_sff': maxSff,
      'max_nve': maxNve,
      'visible': visible,
      'active': active
     };
  }

  static List<CpuWithDefaults> listFromJson(List<dynamic> json) {
    return json == null ? new List<CpuWithDefaults>() : json.map((value) => new CpuWithDefaults.fromJson(value)).toList();
  }

  static Map<String, CpuWithDefaults> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, CpuWithDefaults>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new CpuWithDefaults.fromJson(value));
    }
    return map;
  }
}
