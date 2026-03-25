package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseFilterFirewallFiltersInner  {
  
  @ApiModelProperty(value = "")

  private String daddr;

  @ApiModelProperty(value = "")

  private String dest;

  @ApiModelProperty(value = "")

  private String filterName;

  @ApiModelProperty(value = "")

  private String destinationIp;

  @ApiModelProperty(value = "")

  private String filter;
 /**
   * Get daddr
   * @return daddr
  **/
  @JsonProperty("daddr")
  public String getDaddr() {
    return daddr;
  }

  public void setDaddr(String daddr) {
    this.daddr = daddr;
  }

  public GetScrubIpDetails200ResponseFilterFirewallFiltersInner daddr(String daddr) {
    this.daddr = daddr;
    return this;
  }

 /**
   * Get dest
   * @return dest
  **/
  @JsonProperty("dest")
  public String getDest() {
    return dest;
  }

  public void setDest(String dest) {
    this.dest = dest;
  }

  public GetScrubIpDetails200ResponseFilterFirewallFiltersInner dest(String dest) {
    this.dest = dest;
    return this;
  }

 /**
   * Get filterName
   * @return filterName
  **/
  @JsonProperty("filter_name")
  public String getFilterName() {
    return filterName;
  }

  public void setFilterName(String filterName) {
    this.filterName = filterName;
  }

  public GetScrubIpDetails200ResponseFilterFirewallFiltersInner filterName(String filterName) {
    this.filterName = filterName;
    return this;
  }

 /**
   * Get destinationIp
   * @return destinationIp
  **/
  @JsonProperty("destination_ip")
  public String getDestinationIp() {
    return destinationIp;
  }

  public void setDestinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
  }

  public GetScrubIpDetails200ResponseFilterFirewallFiltersInner destinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
    return this;
  }

 /**
   * Get filter
   * @return filter
  **/
  @JsonProperty("filter")
  public String getFilter() {
    return filter;
  }

  public void setFilter(String filter) {
    this.filter = filter;
  }

  public GetScrubIpDetails200ResponseFilterFirewallFiltersInner filter(String filter) {
    this.filter = filter;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetScrubIpDetails200ResponseFilterFirewallFiltersInner getScrubIpDetails200ResponseFilterFirewallFiltersInner = (GetScrubIpDetails200ResponseFilterFirewallFiltersInner) o;
    return Objects.equals(this.daddr, getScrubIpDetails200ResponseFilterFirewallFiltersInner.daddr) &&
        Objects.equals(this.dest, getScrubIpDetails200ResponseFilterFirewallFiltersInner.dest) &&
        Objects.equals(this.filterName, getScrubIpDetails200ResponseFilterFirewallFiltersInner.filterName) &&
        Objects.equals(this.destinationIp, getScrubIpDetails200ResponseFilterFirewallFiltersInner.destinationIp) &&
        Objects.equals(this.filter, getScrubIpDetails200ResponseFilterFirewallFiltersInner.filter);
  }

  @Override
  public int hashCode() {
    return Objects.hash(daddr, dest, filterName, destinationIp, filter);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseFilterFirewallFiltersInner {\n");
    
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

