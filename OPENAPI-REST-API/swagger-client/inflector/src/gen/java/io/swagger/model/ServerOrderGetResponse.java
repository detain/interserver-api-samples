package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.AssetServer;
import io.swagger.model.ConfigIds;
import io.swagger.model.ConfigLists;
import io.swagger.model.Cpu;
import io.swagger.model.CpuWithDefaults;
import io.swagger.model.FieldLabel;
import io.swagger.model.FormValues;
import io.swagger.model.Region;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


/**
 * Configuration options and pricing data returned when starting a dedicated server order.
 **/
@Schema(description = "Configuration options and pricing data returned when starting a dedicated server order.")


public class ServerOrderGetResponse   {
  @JsonProperty("form_values")
  private FormValues formValues = null;
  @JsonProperty("config_ids")
  private ConfigIds configIds = null;
  @JsonProperty("cpu")
  private Integer cpu = null;
  @JsonProperty("cpu_li")
  private Map<String, Cpu> cpuLi = new HashMap<String, Cpu>();
  @JsonProperty("config_li")
  private ConfigLists configLi = null;
  @JsonProperty("field_label")
  private Map<String, FieldLabel> fieldLabel = null;
  @JsonProperty("cpu_cores")
  private Map<String, Map<String, CpuWithDefaults>> cpuCores = null;
  @JsonProperty("frequency")
  private Integer frequency = null;
  @JsonProperty("currency")
  private String currency = null;
  @JsonProperty("currencySymbol")
  private String currencySymbol = null;
  @JsonProperty("country")
  private String country = null;
  @JsonProperty("custid")
  private Integer custid = null;
  @JsonProperty("ima")
  private String ima = null;
  @JsonProperty("step")
  private String step = null;
  @JsonProperty("regions")
  private List<Region> regions = null;
  @JsonProperty("asset_servers")
  private List<AssetServer> assetServers = null;
  @JsonProperty("buy_it_servers")
  private List<Object> buyItServers = null;
  @JsonProperty("display_showmore")
  private String displayShowmore = null;
  @JsonProperty("cust_discount")
  private BigDecimal custDiscount = null;
  /**
   **/
  public ServerOrderGetResponse formValues(FormValues formValues) {
    this.formValues = formValues;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("form_values")
  public FormValues getFormValues() {
    return formValues;
  }
  public void setFormValues(FormValues formValues) {
    this.formValues = formValues;
  }

  /**
   **/
  public ServerOrderGetResponse configIds(ConfigIds configIds) {
    this.configIds = configIds;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("config_ids")
  public ConfigIds getConfigIds() {
    return configIds;
  }
  public void setConfigIds(ConfigIds configIds) {
    this.configIds = configIds;
  }

  /**
   **/
  public ServerOrderGetResponse cpu(Integer cpu) {
    this.cpu = cpu;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("cpu")
  public Integer getCpu() {
    return cpu;
  }
  public void setCpu(Integer cpu) {
    this.cpu = cpu;
  }

  /**
   **/
  public ServerOrderGetResponse cpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("cpu_li")
  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }
  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  /**
   **/
  public ServerOrderGetResponse configLi(ConfigLists configLi) {
    this.configLi = configLi;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("config_li")
  public ConfigLists getConfigLi() {
    return configLi;
  }
  public void setConfigLi(ConfigLists configLi) {
    this.configLi = configLi;
  }

  /**
   **/
  public ServerOrderGetResponse fieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("field_label")
  public Map<String, FieldLabel> getFieldLabel() {
    return fieldLabel;
  }
  public void setFieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  /**
   **/
  public ServerOrderGetResponse cpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cpu_cores")
  public Map<String, Map<String, CpuWithDefaults>> getCpuCores() {
    return cpuCores;
  }
  public void setCpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
  }

  /**
   **/
  public ServerOrderGetResponse frequency(Integer frequency) {
    this.frequency = frequency;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("frequency")
  public Integer getFrequency() {
    return frequency;
  }
  public void setFrequency(Integer frequency) {
    this.frequency = frequency;
  }

  /**
   **/
  public ServerOrderGetResponse currency(String currency) {
    this.currency = currency;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("currency")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  public ServerOrderGetResponse currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("currencySymbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }
  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  /**
   **/
  public ServerOrderGetResponse country(String country) {
    this.country = country;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   **/
  public ServerOrderGetResponse custid(Integer custid) {
    this.custid = custid;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("custid")
  public Integer getCustid() {
    return custid;
  }
  public void setCustid(Integer custid) {
    this.custid = custid;
  }

  /**
   **/
  public ServerOrderGetResponse ima(String ima) {
    this.ima = ima;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("ima")
  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  public ServerOrderGetResponse step(String step) {
    this.step = step;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("step")
  public String getStep() {
    return step;
  }
  public void setStep(String step) {
    this.step = step;
  }

  /**
   **/
  public ServerOrderGetResponse regions(List<Region> regions) {
    this.regions = regions;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("regions")
  public List<Region> getRegions() {
    return regions;
  }
  public void setRegions(List<Region> regions) {
    this.regions = regions;
  }

  /**
   **/
  public ServerOrderGetResponse assetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("asset_servers")
  public List<AssetServer> getAssetServers() {
    return assetServers;
  }
  public void setAssetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
  }

  /**
   **/
  public ServerOrderGetResponse buyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("buy_it_servers")
  public List<Object> getBuyItServers() {
    return buyItServers;
  }
  public void setBuyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
  }

  /**
   **/
  public ServerOrderGetResponse displayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("display_showmore")
  public String getDisplayShowmore() {
    return displayShowmore;
  }
  public void setDisplayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
  }

  /**
   **/
  public ServerOrderGetResponse custDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("cust_discount")
  public BigDecimal getCustDiscount() {
    return custDiscount;
  }
  public void setCustDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderGetResponse serverOrderGetResponse = (ServerOrderGetResponse) o;
    return Objects.equals(formValues, serverOrderGetResponse.formValues) &&
        Objects.equals(configIds, serverOrderGetResponse.configIds) &&
        Objects.equals(cpu, serverOrderGetResponse.cpu) &&
        Objects.equals(cpuLi, serverOrderGetResponse.cpuLi) &&
        Objects.equals(configLi, serverOrderGetResponse.configLi) &&
        Objects.equals(fieldLabel, serverOrderGetResponse.fieldLabel) &&
        Objects.equals(cpuCores, serverOrderGetResponse.cpuCores) &&
        Objects.equals(frequency, serverOrderGetResponse.frequency) &&
        Objects.equals(currency, serverOrderGetResponse.currency) &&
        Objects.equals(currencySymbol, serverOrderGetResponse.currencySymbol) &&
        Objects.equals(country, serverOrderGetResponse.country) &&
        Objects.equals(custid, serverOrderGetResponse.custid) &&
        Objects.equals(ima, serverOrderGetResponse.ima) &&
        Objects.equals(step, serverOrderGetResponse.step) &&
        Objects.equals(regions, serverOrderGetResponse.regions) &&
        Objects.equals(assetServers, serverOrderGetResponse.assetServers) &&
        Objects.equals(buyItServers, serverOrderGetResponse.buyItServers) &&
        Objects.equals(displayShowmore, serverOrderGetResponse.displayShowmore) &&
        Objects.equals(custDiscount, serverOrderGetResponse.custDiscount);
  }

  @Override
  public int hashCode() {
    return Objects.hash(formValues, configIds, cpu, cpuLi, configLi, fieldLabel, cpuCores, frequency, currency, currencySymbol, country, custid, ima, step, regions, assetServers, buyItServers, displayShowmore, custDiscount);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderGetResponse {\n");
    sb.append("    formValues: ").append(toIndentedString(formValues)).append("\n");
    sb.append("    configIds: ").append(toIndentedString(configIds)).append("\n");
    sb.append("    cpu: ").append(toIndentedString(cpu)).append("\n");
    sb.append("    cpuLi: ").append(toIndentedString(cpuLi)).append("\n");
    sb.append("    configLi: ").append(toIndentedString(configLi)).append("\n");
    sb.append("    fieldLabel: ").append(toIndentedString(fieldLabel)).append("\n");
    sb.append("    cpuCores: ").append(toIndentedString(cpuCores)).append("\n");
    sb.append("    frequency: ").append(toIndentedString(frequency)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    step: ").append(toIndentedString(step)).append("\n");
    sb.append("    regions: ").append(toIndentedString(regions)).append("\n");
    sb.append("    assetServers: ").append(toIndentedString(assetServers)).append("\n");
    sb.append("    buyItServers: ").append(toIndentedString(buyItServers)).append("\n");
    sb.append("    displayShowmore: ").append(toIndentedString(displayShowmore)).append("\n");
    sb.append("    custDiscount: ").append(toIndentedString(custDiscount)).append("\n");
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
