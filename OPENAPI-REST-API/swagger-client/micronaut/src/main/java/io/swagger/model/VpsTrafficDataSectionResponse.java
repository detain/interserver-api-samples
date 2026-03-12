package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VPSTrafficDataDataSectionResponse;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * VPS Traffic Data Section Response
 */
@Schema(description = "VPS Traffic Data Section Response")
@Validated
@Introspected

public class VpsTrafficDataSectionResponse   {
  @JsonProperty("name")
  private String name = null;

  @JsonProperty("data")
  @Valid
  private List<VPSTrafficDataDataSectionResponse> data = new ArrayList<VPSTrafficDataDataSectionResponse>();

  public VpsTrafficDataSectionResponse name(String name) {
    this.name = name;
    return this;
  }

  /**
   * Get name
   * @return name
  **/
  @Schema(required = true, description = "")
  @NotNull

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public VpsTrafficDataSectionResponse data(List<VPSTrafficDataDataSectionResponse> data) {
    this.data = data;
    return this;
  }

  public VpsTrafficDataSectionResponse addDataItem(VPSTrafficDataDataSectionResponse dataItem) {
    this.data.add(dataItem);
    return this;
  }

  /**
   * Get data
   * @return data
  **/
  @Schema(required = true, description = "")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
