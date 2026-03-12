part of swagger.api;

class Region {
  
  int regionId = null;

  String regionName = null;

  Region();

  @override
  String toString() {
    return 'Region[regionId=$regionId, regionName=$regionName, ]';
  }

  Region.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    regionId = json['region_id'];
    regionName = json['region_name'];
  }

  Map<String, dynamic> toJson() {
    return {
      'region_id': regionId,
      'region_name': regionName
     };
  }

  static List<Region> listFromJson(List<dynamic> json) {
    return json == null ? new List<Region>() : json.map((value) => new Region.fromJson(value)).toList();
  }

  static Map<String, Region> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, Region>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new Region.fromJson(value));
    }
    return map;
  }
}
