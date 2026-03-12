package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
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
  * Lookup and suggestion results returned for a domain search.
 **/
@Schema(description="Lookup and suggestion results returned for a domain search.")
public class DomainSearchResponse   {
  
  @Schema(description = "Indicates whether the registrar search succeeded.")
 /**
   * Indicates whether the registrar search succeeded.  
  **/
  private Boolean success = null;
  
  @Schema(description = "Human-readable status text from the registrar.")
 /**
   * Human-readable status text from the registrar.  
  **/
  private String responseText = null;
  
  @Schema(description = "Response time as reported by the registrar.")
 /**
   * Response time as reported by the registrar.  
  **/
  private String responseTime = null;
  
  @Schema(description = "Availability lookup results for queried domains.")
 /**
   * Availability lookup results for queried domains.  
  **/
  private List<Object> lookup = null;
  
  @Schema(description = "Suggested alternative domains and availability data.")
 /**
   * Suggested alternative domains and availability data.  
  **/
  private List<Object> suggest = null;
  
  @Schema(description = "TLDs evaluated during the search.")
 /**
   * TLDs evaluated during the search.  
  **/
  private List<String> tlds = null;
 /**
   * Indicates whether the registrar search succeeded.
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

  public DomainSearchResponse success(Boolean success) {
    this.success = success;
    return this;
  }

 /**
   * Human-readable status text from the registrar.
   * @return responseText
  **/
  @JsonProperty("response_text")
  @NotNull
  public String getResponseText() {
    return responseText;
  }

  public void setResponseText(String responseText) {
    this.responseText = responseText;
  }

  public DomainSearchResponse responseText(String responseText) {
    this.responseText = responseText;
    return this;
  }

 /**
   * Response time as reported by the registrar.
   * @return responseTime
  **/
  @JsonProperty("response_time")
  @NotNull
  public String getResponseTime() {
    return responseTime;
  }

  public void setResponseTime(String responseTime) {
    this.responseTime = responseTime;
  }

  public DomainSearchResponse responseTime(String responseTime) {
    this.responseTime = responseTime;
    return this;
  }

 /**
   * Availability lookup results for queried domains.
   * @return lookup
  **/
  @JsonProperty("lookup")
  @NotNull
  public List<Object> getLookup() {
    return lookup;
  }

  public void setLookup(List<Object> lookup) {
    this.lookup = lookup;
  }

  public DomainSearchResponse lookup(List<Object> lookup) {
    this.lookup = lookup;
    return this;
  }

  public DomainSearchResponse addLookupItem(Object lookupItem) {
    this.lookup.add(lookupItem);
    return this;
  }

 /**
   * Suggested alternative domains and availability data.
   * @return suggest
  **/
  @JsonProperty("suggest")
  @NotNull
  public List<Object> getSuggest() {
    return suggest;
  }

  public void setSuggest(List<Object> suggest) {
    this.suggest = suggest;
  }

  public DomainSearchResponse suggest(List<Object> suggest) {
    this.suggest = suggest;
    return this;
  }

  public DomainSearchResponse addSuggestItem(Object suggestItem) {
    this.suggest.add(suggestItem);
    return this;
  }

 /**
   * TLDs evaluated during the search.
   * @return tlds
  **/
  @JsonProperty("tlds")
  @NotNull
  public List<String> getTlds() {
    return tlds;
  }

  public void setTlds(List<String> tlds) {
    this.tlds = tlds;
  }

  public DomainSearchResponse tlds(List<String> tlds) {
    this.tlds = tlds;
    return this;
  }

  public DomainSearchResponse addTldsItem(String tldsItem) {
    this.tlds.add(tldsItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
