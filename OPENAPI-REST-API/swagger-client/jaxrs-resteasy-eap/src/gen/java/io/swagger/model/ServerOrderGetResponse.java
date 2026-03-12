package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
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
import java.util.List;
import java.util.Map;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Configuration options and pricing data returned when starting a dedicated server order.")

public class ServerOrderGetResponse   {
  private FormValues formValues = null;
  private ConfigIds configIds = null;
  private Integer cpu = null;
  private Map<String, Cpu> cpuLi = new HashMap<String, Cpu>();
  private ConfigLists configLi = null;
  private Map<String, FieldLabel> fieldLabel = new HashMap<String, FieldLabel>();
  private Map<String, Map<String, CpuWithDefaults>> cpuCores = new HashMap<String, Map<String, CpuWithDefaults>>();
  private Integer frequency = null;
  private String currency = null;
  private String currencySymbol = null;
  private String country = null;
  private Integer custid = null;
  private String ima = null;
  private String step = null;
  private List<Region> regions = new ArrayList<Region>();
  private List<AssetServer> assetServers = new ArrayList<AssetServer>();
  private List<Object> buyItServers = new ArrayList<Object>();
  private String displayShowmore = null;
  private BigDecimal custDiscount = null;

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("form_values")
  @NotNull
  public FormValues getFormValues() {
    return formValues;
  }
  public void setFormValues(FormValues formValues) {
    this.formValues = formValues;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("config_ids")
  @NotNull
  public ConfigIds getConfigIds() {
    return configIds;
  }
  public void setConfigIds(ConfigIds configIds) {
    this.configIds = configIds;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("cpu")
  @NotNull
  public Integer getCpu() {
    return cpu;
  }
  public void setCpu(Integer cpu) {
    this.cpu = cpu;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("cpu_li")
  @NotNull
  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }
  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("config_li")
  @NotNull
  public ConfigLists getConfigLi() {
    return configLi;
  }
  public void setConfigLi(ConfigLists configLi) {
    this.configLi = configLi;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("field_label")
  @NotNull
  public Map<String, FieldLabel> getFieldLabel() {
    return fieldLabel;
  }
  public void setFieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("cpu_cores")
  @NotNull
  public Map<String, Map<String, CpuWithDefaults>> getCpuCores() {
    return cpuCores;
  }
  public void setCpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("frequency")
  @NotNull
  public Integer getFrequency() {
    return frequency;
  }
  public void setFrequency(Integer frequency) {
    this.frequency = frequency;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("currency")
  @NotNull
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("currencySymbol")
  @NotNull
  public String getCurrencySymbol() {
    return currencySymbol;
  }
  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("country")
  @NotNull
  public String getCountry() {
    return country;
  }
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("custid")
  @NotNull
  public Integer getCustid() {
    return custid;
  }
  public void setCustid(Integer custid) {
    this.custid = custid;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("ima")
  @NotNull
  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  
  @Schema(required = true, description = "")
  @JsonProperty("step")
  @NotNull
  public String getStep() {
    return step;
  }
  public void setStep(String step) {
    this.step = step;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("regions")
  @NotNull
  public List<Region> getRegions() {
    return regions;
  }
  public void setRegions(List<Region> regions) {
    this.regions = regions;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("asset_servers")
  @NotNull
  public List<AssetServer> getAssetServers() {
    return assetServers;
  }
  public void setAssetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("buy_it_servers")
  @NotNull
  public List<Object> getBuyItServers() {
    return buyItServers;
  }
  public void setBuyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("display_showmore")
  @NotNull
  public String getDisplayShowmore() {
    return displayShowmore;
  }
  public void setDisplayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("cust_discount")
  @NotNull
  public BigDecimal getCustDiscount() {
    return custDiscount;
  }
  public void setCustDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
