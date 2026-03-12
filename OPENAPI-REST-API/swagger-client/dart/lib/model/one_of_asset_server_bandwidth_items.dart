part of swagger.api;

class OneOfAssetServerBandwidthItems {
  
  OneOfAssetServerBandwidthItems();

  @override
  String toString() {
    return 'OneOfAssetServerBandwidthItems[]';
  }

  OneOfAssetServerBandwidthItems.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
  }

  Map<String, dynamic> toJson() {
    return {
     };
  }

  static List<OneOfAssetServerBandwidthItems> listFromJson(List<dynamic> json) {
    return json == null ? new List<OneOfAssetServerBandwidthItems>() : json.map((value) => new OneOfAssetServerBandwidthItems.fromJson(value)).toList();
  }

  static Map<String, OneOfAssetServerBandwidthItems> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, OneOfAssetServerBandwidthItems>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new OneOfAssetServerBandwidthItems.fromJson(value));
    }
    return map;
  }
}
