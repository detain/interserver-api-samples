part of swagger.api;

class InlineResponse20018PackageCosts {
  
  double packageId = null;

  double packageCost = null;

  String currency = null;

  String currencySymbol = null;

  InlineResponse20018PackageCosts();

  @override
  String toString() {
    return 'InlineResponse20018PackageCosts[packageId=$packageId, packageCost=$packageCost, currency=$currency, currencySymbol=$currencySymbol, ]';
  }

  InlineResponse20018PackageCosts.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    packageId = json['package_id'];
    packageCost = json['package_cost'];
    currency = json['currency'];
    currencySymbol = json['currencySymbol'];
  }

  Map<String, dynamic> toJson() {
    return {
      'package_id': packageId,
      'package_cost': packageCost,
      'currency': currency,
      'currencySymbol': currencySymbol
     };
  }

  static List<InlineResponse20018PackageCosts> listFromJson(List<dynamic> json) {
    return json == null ? new List<InlineResponse20018PackageCosts>() : json.map((value) => new InlineResponse20018PackageCosts.fromJson(value)).toList();
  }

  static Map<String, InlineResponse20018PackageCosts> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, InlineResponse20018PackageCosts>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new InlineResponse20018PackageCosts.fromJson(value));
    }
    return map;
  }
}
