using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The service offers data.
  /// </summary>
  [DataContract]
  public class WebsitesOrderServiceOffers {
    /// <summary>
    /// Gets or Sets _1026
    /// </summary>
    [DataMember(Name="1026", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "1026")]
    public List<WebsitesOrderServiceOffer> _1026 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrderServiceOffers {\n");
      sb.Append("  _1026: ").Append(_1026).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
