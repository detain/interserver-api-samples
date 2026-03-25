package org.openapitools.model;

import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.VPSTrafficDataDataSectionResponseInner;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * VPS Traffic Data section Data subsection Row Response
 */
@ApiModel(description="VPS Traffic Data section Data subsection Row Response")

public class VPSTrafficDataDataSectionResponse extends ArrayList<VPSTrafficDataDataSectionResponseInner> {
    @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VPSTrafficDataDataSectionResponse vpSTrafficDataDataSectionResponse = (VPSTrafficDataDataSectionResponse) o;
    return true;
  }

  @Override
  public int hashCode() {
    return Objects.hash(super.hashCode());
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VPSTrafficDataDataSectionResponse {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
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

