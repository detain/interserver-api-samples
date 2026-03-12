package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;


/**
 * Lookup and suggestion results returned for a domain search.
 **/
@Schema(description = "Lookup and suggestion results returned for a domain search.")


public class DomainSearchResponse   {
  @JsonProperty("success")
  private Boolean success = null;
  @JsonProperty("response_text")
  private String responseText = null;
  @JsonProperty("response_time")
  private String responseTime = null;
  @JsonProperty("lookup")
  private List<Object> lookup = null;
  @JsonProperty("suggest")
  private List<Object> suggest = null;
  @JsonProperty("tlds")
  private List<String> tlds = null;
  /**
   * Indicates whether the registrar search succeeded.
   **/
  public DomainSearchResponse success(Boolean success) {
    this.success = success;
    return this;
  }

  
  @Schema(description = "Indicates whether the registrar search succeeded.")
  @JsonProperty("success")
  public Boolean isSuccess() {
    return success;
  }
  public void setSuccess(Boolean success) {
    this.success = success;
  }

  /**
   * Human-readable status text from the registrar.
   **/
  public DomainSearchResponse responseText(String responseText) {
    this.responseText = responseText;
    return this;
  }

  
  @Schema(description = "Human-readable status text from the registrar.")
  @JsonProperty("response_text")
  public String getResponseText() {
    return responseText;
  }
  public void setResponseText(String responseText) {
    this.responseText = responseText;
  }

  /**
   * Response time as reported by the registrar.
   **/
  public DomainSearchResponse responseTime(String responseTime) {
    this.responseTime = responseTime;
    return this;
  }

  
  @Schema(description = "Response time as reported by the registrar.")
  @JsonProperty("response_time")
  public String getResponseTime() {
    return responseTime;
  }
  public void setResponseTime(String responseTime) {
    this.responseTime = responseTime;
  }

  /**
   * Availability lookup results for queried domains.
   **/
  public DomainSearchResponse lookup(List<Object> lookup) {
    this.lookup = lookup;
    return this;
  }

  
  @Schema(description = "Availability lookup results for queried domains.")
  @JsonProperty("lookup")
  public List<Object> getLookup() {
    return lookup;
  }
  public void setLookup(List<Object> lookup) {
    this.lookup = lookup;
  }

  /**
   * Suggested alternative domains and availability data.
   **/
  public DomainSearchResponse suggest(List<Object> suggest) {
    this.suggest = suggest;
    return this;
  }

  
  @Schema(description = "Suggested alternative domains and availability data.")
  @JsonProperty("suggest")
  public List<Object> getSuggest() {
    return suggest;
  }
  public void setSuggest(List<Object> suggest) {
    this.suggest = suggest;
  }

  /**
   * TLDs evaluated during the search.
   **/
  public DomainSearchResponse tlds(List<String> tlds) {
    this.tlds = tlds;
    return this;
  }

  
  @Schema(description = "TLDs evaluated during the search.")
  @JsonProperty("tlds")
  public List<String> getTlds() {
    return tlds;
  }
  public void setTlds(List<String> tlds) {
    this.tlds = tlds;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
