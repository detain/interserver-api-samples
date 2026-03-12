package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.VPSTrafficDataDataSectionResponse;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Data Section Response
 */
@ApiModel(description="VPS Traffic Data Section Response")

public class VpsTrafficDataSectionResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private String name;

  @ApiModelProperty(required = true, value = "")

  private List<VPSTrafficDataDataSectionResponse> data = new ArrayList<>();
 /**
   * Get name
   * @return name
  **/
  @JsonProperty("name")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsTrafficDataSectionResponse name(String name) {
    this.name = name;
    return this;
  }

 /**
   * Get data
   * @return data
  **/
  @JsonProperty("data")
  public List<VPSTrafficDataDataSectionResponse> getData() {
    return data;
  }

  public void setData(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
  }

  public VpsTrafficDataSectionResponse data(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
    return this;
  }

  public VpsTrafficDataSectionResponse addDataItem(VPSTrafficDataDataSectionResponse dataItem) {
    this.data.add(dataItem);
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
    VpsTrafficDataSectionResponse vpsTrafficDataSectionResponse = (VpsTrafficDataSectionResponse) o;
    return Objects.equals(this.name, vpsTrafficDataSectionResponse.name) &&
        Objects.equals(this.data, vpsTrafficDataSectionResponse.data);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, data);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsTrafficDataSectionResponse {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    data: ").append(toIndentedString(data)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

