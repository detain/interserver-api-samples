part of swagger.api;

class OneOfAssetServerCPUItems {
  
  OneOfAssetServerCPUItems();

  @override
  String toString() {
    return 'OneOfAssetServerCPUItems[]';
  }

  OneOfAssetServerCPUItems.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<OneOfAssetServerCPUItems> listFromJson(List<dynamic> json) {
    return json == null ? new List<OneOfAssetServerCPUItems>() : json.map((value) => new OneOfAssetServerCPUItems.fromJson(value)).toList();
  }

  static Map<String, OneOfAssetServerCPUItems> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, OneOfAssetServerCPUItems>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new OneOfAssetServerCPUItems.fromJson(value));
    }
    return map;
  }
}
