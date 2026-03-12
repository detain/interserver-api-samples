package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.InlineResponse20012FilterFirewallFilters;
import io.swagger.model.InlineResponse20012FilterFirewallRules;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class InlineResponse20012FilterFirewall   {
  @JsonProperty("rules")
  private List<InlineResponse20012FilterFirewallRules> rules = null;
  @JsonProperty("filters")
  private List<InlineResponse20012FilterFirewallFilters> filters = null;
  @JsonProperty("scrub_enabled")
  private Integer scrubEnabled = null;
  /**
   **/
  public InlineResponse20012FilterFirewall rules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("rules")
  public List<InlineResponse20012FilterFirewallRules> getRules() {
    return rules;
  }
  public void setRules(List<InlineResponse20012FilterFirewallRules> rules) {
    this.rules = rules;
  }

  /**
   **/
  public InlineResponse20012FilterFirewall filters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("filters")
  public List<InlineResponse20012FilterFirewallFilters> getFilters() {
    return filters;
  }
  public void setFilters(List<InlineResponse20012FilterFirewallFilters> filters) {
    this.filters = filters;
  }

  /**
   **/
  public InlineResponse20012FilterFirewall scrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("scrub_enabled")
  public Integer getScrubEnabled() {
    return scrubEnabled;
  }
  public void setScrubEnabled(Integer scrubEnabled) {
    this.scrubEnabled = scrubEnabled;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012FilterFirewall inlineResponse20012FilterFirewall = (InlineResponse20012FilterFirewall) o;
    return Objects.equals(rules, inlineResponse20012FilterFirewall.rules) &&
        Objects.equals(filters, inlineResponse20012FilterFirewall.filters) &&
        Objects.equals(scrubEnabled, inlineResponse20012FilterFirewall.scrubEnabled);
  }

  @Override
  public int hashCode() {
    return Objects.hash(rules, filters, scrubEnabled);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012FilterFirewall {\n");
    sb.append("    rules: ").append(toIndentedString(rules)).append("\n");
    sb.append("    filters: ").append(toIndentedString(filters)).append("\n");
    sb.append("    scrubEnabled: ").append(toIndentedString(scrubEnabled)).append("\n");
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
