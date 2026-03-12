package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class InlineResponse20012FilterFirewallFilters   {
  @JsonProperty("daddr")
  private String daddr = null;
  @JsonProperty("dest")
  private String dest = null;
  @JsonProperty("filter_name")
  private String filterName = null;
  @JsonProperty("destination_ip")
  private String destinationIp = null;
  @JsonProperty("filter")
  private String filter = null;
  /**
   **/
  public InlineResponse20012FilterFirewallFilters daddr(String daddr) {
    this.daddr = daddr;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("daddr")
  public String getDaddr() {
    return daddr;
  }
  public void setDaddr(String daddr) {
    this.daddr = daddr;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallFilters dest(String dest) {
    this.dest = dest;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("dest")
  public String getDest() {
    return dest;
  }
  public void setDest(String dest) {
    this.dest = dest;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallFilters filterName(String filterName) {
    this.filterName = filterName;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("filter_name")
  public String getFilterName() {
    return filterName;
  }
  public void setFilterName(String filterName) {
    this.filterName = filterName;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallFilters destinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("destination_ip")
  public String getDestinationIp() {
    return destinationIp;
  }
  public void setDestinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallFilters filter(String filter) {
    this.filter = filter;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("filter")
  public String getFilter() {
    return filter;
  }
  public void setFilter(String filter) {
    this.filter = filter;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012FilterFirewallFilters inlineResponse20012FilterFirewallFilters = (InlineResponse20012FilterFirewallFilters) o;
    return Objects.equals(daddr, inlineResponse20012FilterFirewallFilters.daddr) &&
        Objects.equals(dest, inlineResponse20012FilterFirewallFilters.dest) &&
        Objects.equals(filterName, inlineResponse20012FilterFirewallFilters.filterName) &&
        Objects.equals(destinationIp, inlineResponse20012FilterFirewallFilters.destinationIp) &&
        Objects.equals(filter, inlineResponse20012FilterFirewallFilters.filter);
  }

  @Override
  public int hashCode() {
    return Objects.hash(daddr, dest, filterName, destinationIp, filter);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012FilterFirewallFilters {\n");
    sb.append("    daddr: ").append(toIndentedString(daddr)).append("\n");
    sb.append("    dest: ").append(toIndentedString(dest)).append("\n");
    sb.append("    filterName: ").append(toIndentedString(filterName)).append("\n");
    sb.append("    destinationIp: ").append(toIndentedString(destinationIp)).append("\n");
    sb.append("    filter: ").append(toIndentedString(filter)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
