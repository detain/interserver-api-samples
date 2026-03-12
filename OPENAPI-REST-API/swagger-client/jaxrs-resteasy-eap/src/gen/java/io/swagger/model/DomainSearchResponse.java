package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.List;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Lookup and suggestion results returned for a domain search.")

public class DomainSearchResponse   {
  private Boolean success = null;
  private String responseText = null;
  private String responseTime = null;
  private List<Object> lookup = new ArrayList<Object>();
  private List<Object> suggest = new ArrayList<Object>();
  private List<String> tlds = new ArrayList<String>();

  /**
   * Indicates whether the registrar search succeeded.
   **/
  
  @Schema(description = "Indicates whether the registrar search succeeded.")
  @JsonProperty("success")
  @NotNull
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   * Human-readable status text from the registrar.
   **/
  
  @Schema(description = "Human-readable status text from the registrar.")
  @JsonProperty("response_text")
  @NotNull
  public String getResponseText() {
    return responseText;
  }
  public void setResponseText(String responseText) {
    this.responseText = responseText;
  }

  /**
   * Response time as reported by the registrar.
   **/
  
  @Schema(description = "Response time as reported by the registrar.")
  @JsonProperty("response_time")
  @NotNull
  public String getResponseTime() {
    return responseTime;
  }
  public void setResponseTime(String responseTime) {
    this.responseTime = responseTime;
  }

  /**
   * Availability lookup results for queried domains.
   **/
  
  @Schema(description = "Availability lookup results for queried domains.")
  @JsonProperty("lookup")
  @NotNull
  public List<Object> getLookup() {
    return lookup;
  }
  public void setLookup(List<Object> lookup) {
    this.lookup = lookup;
  }

  /**
   * Suggested alternative domains and availability data.
   **/
  
  @Schema(description = "Suggested alternative domains and availability data.")
  @JsonProperty("suggest")
  @NotNull
  public List<Object> getSuggest() {
    return suggest;
  }
  public void setSuggest(List<Object> suggest) {
    this.suggest = suggest;
  }

  /**
   * TLDs evaluated during the search.
   **/
  
  @Schema(description = "TLDs evaluated during the search.")
  @JsonProperty("tlds")
  @NotNull
  public List<String> getTlds() {
    return tlds;
  }
  public void setTlds(List<String> tlds) {
    this.tlds = tlds;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    DomainSearchResponse domainSearchResponse = (DomainSearchResponse) o;
    return Objects.equals(success, domainSearchResponse.success) &&
        Objects.equals(responseText, domainSearchResponse.responseText) &&
        Objects.equals(responseTime, domainSearchResponse.responseTime) &&
        Objects.equals(lookup, domainSearchResponse.lookup) &&
        Objects.equals(suggest, domainSearchResponse.suggest) &&
        Objects.equals(tlds, domainSearchResponse.tlds);
  }

  @Override
  public int hashCode() {
    return Objects.hash(success, responseText, responseTime, lookup, suggest, tlds);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainSearchResponse {\n");
    
    sb.append("    success: ").append(toIndentedString(success)).append("\n");
    sb.append("    responseText: ").append(toIndentedString(responseText)).append("\n");
    sb.append("    responseTime: ").append(toIndentedString(responseTime)).append("\n");
    sb.append("    lookup: ").append(toIndentedString(lookup)).append("\n");
    sb.append("    suggest: ").append(toIndentedString(suggest)).append("\n");
    sb.append("    tlds: ").append(toIndentedString(tlds)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
