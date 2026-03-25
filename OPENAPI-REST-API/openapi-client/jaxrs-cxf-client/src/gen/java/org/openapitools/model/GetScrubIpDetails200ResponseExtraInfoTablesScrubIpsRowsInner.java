package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner  {
  
  @ApiModelProperty(value = "")

  private String desc;

  @ApiModelProperty(value = "")

  private String value;
 /**
   * Get desc
   * @return desc
  **/
  @JsonProperty("desc")
  public String getDesc() {
    return desc;
  }

  public void setDesc(String desc) {
    this.desc = desc;
  }

  public GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner desc(String desc) {
    this.desc = desc;
    return this;
  }

 /**
   * Get value
   * @return value
  **/
  @JsonProperty("value")
  public String getValue() {
    return value;
  }

  public void setValue(String value) {
    this.value = value;
  }

  public GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner value(String value) {
    this.value = value;
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
    GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner getScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner = (GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner) o;
    return Objects.equals(this.desc, getScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner.desc) &&
        Objects.equals(this.value, getScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(desc, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseExtraInfoTablesScrubIpsRowsInner {\n");
    
    sb.append("    desc: ").append(toIndentedString(desc)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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

