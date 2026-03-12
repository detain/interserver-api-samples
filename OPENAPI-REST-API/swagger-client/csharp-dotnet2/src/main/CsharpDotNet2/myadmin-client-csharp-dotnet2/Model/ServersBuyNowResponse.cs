using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Success response after placing a buy-it-now dedicated server order.
  /// </summary>
  [DataContract]
  public class ServersBuyNowResponse {
    /// <summary>
    /// Whether the order was placed successfully.
    /// </summary>
    /// <value>Whether the order was placed successfully.</value>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// Human-readable status message.
    /// </summary>
    /// <value>Human-readable status message.</value>
    [DataMember(Name="text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "text")]
    public string Text { get; set; }

    /// <summary>
    /// Gets or Sets OrderDetails
    /// </summary>
    [DataMember(Name="order_details", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "order_details")]
    public ServersBuyNowResponseOrderDetails OrderDetails { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServersBuyNowResponse {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  Text: ").Append(Text).Append("\n");
      sb.Append("  OrderDetails: ").Append(OrderDetails).Append("\n");
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
