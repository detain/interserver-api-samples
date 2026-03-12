using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A listing of support tickets.
  /// </summary>
  [DataContract]
  public class Tickets {
    /// <summary>
    /// Gets or Sets Ima
    /// </summary>
    [DataMember(Name="ima", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ima")]
    public string Ima { get; set; }

    /// <summary>
    /// Gets or Sets Custid
    /// </summary>
    [DataMember(Name="custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custid")]
    public string Custid { get; set; }

    /// <summary>
    /// Gets or Sets View
    /// </summary>
    [DataMember(Name="view", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "view")]
    public string View { get; set; }

    /// <summary>
    /// Gets or Sets CurrentPage
    /// </summary>
    [DataMember(Name="currentPage", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currentPage")]
    public int? CurrentPage { get; set; }

    /// <summary>
    /// Gets or Sets Limit
    /// </summary>
    [DataMember(Name="limit", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "limit")]
    public int? Limit { get; set; }

    /// <summary>
    /// Gets or Sets Sortcol
    /// </summary>
    [DataMember(Name="sortcol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sortcol")]
    public int? Sortcol { get; set; }

    /// <summary>
    /// Gets or Sets Sortdir
    /// </summary>
    [DataMember(Name="sortdir", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sortdir")]
    public int? Sortdir { get; set; }

    /// <summary>
    /// Gets or Sets RowsOffset
    /// </summary>
    [DataMember(Name="rowsOffset", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rowsOffset")]
    public int? RowsOffset { get; set; }

    /// <summary>
    /// Gets or Sets _Tickets
    /// </summary>
    [DataMember(Name="tickets", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tickets")]
    public List<TicketsRow> _Tickets { get; set; }

    /// <summary>
    /// Gets or Sets Pages
    /// </summary>
    [DataMember(Name="pages", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "pages")]
    public int? Pages { get; set; }

    /// <summary>
    /// Gets or Sets RowsTotal
    /// </summary>
    [DataMember(Name="rowsTotal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rowsTotal")]
    public int? RowsTotal { get; set; }

    /// <summary>
    /// Gets or Sets InboxCount
    /// </summary>
    [DataMember(Name="inboxCount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "inboxCount")]
    public int? InboxCount { get; set; }

    /// <summary>
    /// Gets or Sets CountArray
    /// </summary>
    [DataMember(Name="countArray", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "countArray")]
    public TicketsCountArray CountArray { get; set; }

    /// <summary>
    /// Gets or Sets ViewText
    /// </summary>
    [DataMember(Name="viewText", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "viewText")]
    public string ViewText { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Tickets {\n");
      sb.Append("  Ima: ").Append(Ima).Append("\n");
      sb.Append("  Custid: ").Append(Custid).Append("\n");
      sb.Append("  View: ").Append(View).Append("\n");
      sb.Append("  CurrentPage: ").Append(CurrentPage).Append("\n");
      sb.Append("  Limit: ").Append(Limit).Append("\n");
      sb.Append("  Sortcol: ").Append(Sortcol).Append("\n");
      sb.Append("  Sortdir: ").Append(Sortdir).Append("\n");
      sb.Append("  RowsOffset: ").Append(RowsOffset).Append("\n");
      sb.Append("  _Tickets: ").Append(_Tickets).Append("\n");
      sb.Append("  Pages: ").Append(Pages).Append("\n");
      sb.Append("  RowsTotal: ").Append(RowsTotal).Append("\n");
      sb.Append("  InboxCount: ").Append(InboxCount).Append("\n");
      sb.Append("  CountArray: ").Append(CountArray).Append("\n");
      sb.Append("  ViewText: ").Append(ViewText).Append("\n");
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
