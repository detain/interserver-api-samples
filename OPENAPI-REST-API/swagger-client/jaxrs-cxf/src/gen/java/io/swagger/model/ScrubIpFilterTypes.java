package io.swagger.model;

import io.swagger.model.ScrubIpFilterTypesFilters;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Available scrub filter types for building firewall rules.
 **/
@Schema(description="Available scrub filter types for building firewall rules.")
public class ScrubIpFilterTypes   {
  
  @Schema(description = "")
  private Boolean success = null;
  
  @Schema(description = "")
  private Map<String, ScrubIpFilterTypesFilters> filters = null;
 /**
   * Get success
   * @return success
  **/
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }

  public void setSuccess(Boolean success) {
    this.success = success;
  }

  public ScrubIpFilterTypes success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Get filters
   * @return filters
  **/
  @JsonProperty("filters")
  @NotNull
  public Map<String, ScrubIpFilterTypesFilters> getFilters() {
    return filters;
  }

  public void setFilters(Map<String, ScrubIpFilterTypesFilters> filters) {
    this.filters = filters;
  }

  public ScrubIpFilterTypes filters(Map<String, ScrubIpFilterTypesFilters> filters) {
    this.filters = filters;
    return this;
  }

  public ScrubIpFilterTypes putFiltersItem(String key, ScrubIpFilterTypesFilters filtersItem) {
    this.filters.put(key, filtersItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
