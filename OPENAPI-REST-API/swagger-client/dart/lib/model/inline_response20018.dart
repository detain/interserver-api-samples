part of swagger.api;

class InlineResponse20018 {
  
  InlineResponse20018PackageCosts packageCosts = null;

  List<InlineResponse20018ServiceTypes> serviceTypes = [];

  List<InlineResponse20018Ips> ips = [];

  InlineResponse20018();

  @override
  String toString() {
    return 'InlineResponse20018[packageCosts=$packageCosts, serviceTypes=$serviceTypes, ips=$ips, ]';
  }

  InlineResponse20018.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    packageCosts = new InlineResponse20018PackageCosts.fromJson(json['packageCosts']);
    serviceTypes = InlineResponse20018ServiceTypes.listFromJson(json['serviceTypes']);
    ips = InlineResponse20018Ips.listFromJson(json['ips']);
  }

  Map<String, dynamic> toJson() {
    return {
      'packageCosts': packageCosts,
      'serviceTypes': serviceTypes,
      'ips': ips
     };
  }

  static List<InlineResponse20018> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20018>() : json.map((value) => new InlineResponse20018.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20018> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20018>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20018.fromJson(value));
    }
    return map;
  }
}
