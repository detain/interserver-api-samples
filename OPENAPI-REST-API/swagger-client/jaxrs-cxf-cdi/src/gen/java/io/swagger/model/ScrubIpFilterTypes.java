package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ScrubIpFilterTypesFilters;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Available scrub filter types for building firewall rules.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Available scrub filter types for building firewall rules.")

public class ScrubIpFilterTypes   {
  private Boolean success = null;
  private Map<String, ScrubIpFilterTypesFilters> filters = new HashMap<String, ScrubIpFilterTypesFilters>();

  /**
   **/
  public ScrubIpFilterTypes success(Boolean success) {
    this.success = success;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   **/
  public ScrubIpFilterTypes filters(Map<String, ScrubIpFilterTypesFilters> filters) {
    this.filters = filters;
    return this;
  }

  
  
  @Schema(description = "")
  @JsonProperty("filters")
  @NotNull
  @Valid
  public Map<String, ScrubIpFilterTypesFilters> getFilters() {
    return filters;
  }
  public void setFilters(Map<String, ScrubIpFilterTypesFilters> filters) {
    this.filters = filters;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ScrubIpFilterTypes scrubIpFilterTypes = (ScrubIpFilterTypes) o;
    return Objects.equals(success, scrubIpFilterTypes.success) &&
        Objects.equals(filters, scrubIpFilterTypes.filters);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, filters);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ScrubIpFilterTypes {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
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
