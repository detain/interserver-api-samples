package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VPSTrafficDataDataSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * VPS Traffic Data Section Response
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "VPS Traffic Data Section Response")

public class VpsTrafficDataSectionResponse   {
  private String name = null;
  private List<VPSTrafficDataDataSectionResponse> data = new ArrayList<VPSTrafficDataDataSectionResponse>();

  /**
   **/
  public VpsTrafficDataSectionResponse name(String name) {
    this.name = name;
    return this;
  }

  
  
  @Schema(required = true, description = "")
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

  
  
  @Schema(required = true, description = "")
  @JsonProperty("data")
  @NotNull
  @Valid
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
