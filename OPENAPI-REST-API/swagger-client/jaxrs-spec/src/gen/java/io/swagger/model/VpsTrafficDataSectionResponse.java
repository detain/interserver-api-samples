package io.swagger.model;

import io.swagger.model.VPSTrafficDataDataSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * VPS Traffic Data Section Response
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "VPS Traffic Data Section Response")

public class VpsTrafficDataSectionResponse   {

  private @Valid String name = null;

  private @Valid List<VPSTrafficDataDataSectionResponse> data = new ArrayList<VPSTrafficDataDataSectionResponse>();

  /**
   **/
  public VpsTrafficDataSectionResponse name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("name")
  @NotNull

  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  public VpsTrafficDataSectionResponse data(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("data")
  @NotNull

  public List<VPSTrafficDataDataSectionResponse> getData() {
    return data;
  }
  public void setData(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsTrafficDataSectionResponse vpsTrafficDataSectionResponse = (VpsTrafficDataSectionResponse) o;
    return Objects.equals(name, vpsTrafficDataSectionResponse.name) &&
        Objects.equals(data, vpsTrafficDataSectionResponse.data);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
