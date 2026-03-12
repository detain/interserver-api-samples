part of swagger.api;

class OneOfAssetServerIPsItems {
  
  OneOfAssetServerIPsItems();

  @override
  String toString() {
    return 'OneOfAssetServerIPsItems[]';
  }

  OneOfAssetServerIPsItems.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<OneOfAssetServerIPsItems> listFromJson(List<dynamic> json) {
    return json == null ? new List<OneOfAssetServerIPsItems>() : json.map((value) => new OneOfAssetServerIPsItems.fromJson(value)).toList();
  }

  static Map<String, OneOfAssetServerIPsItems> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, OneOfAssetServerIPsItems>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new OneOfAssetServerIPsItems.fromJson(value));
    }
    return map;
  }
}
