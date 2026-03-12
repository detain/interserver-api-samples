package io.swagger.model;

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
  * Configuration options and pricing data returned when starting a dedicated server order.
 **/
@Schema(description="Configuration options and pricing data returned when starting a dedicated server order.")
public class ServerOrderGetResponse   {
  
  @Schema(required = true, description = "")
  private FormValues formValues = null;
  
  @Schema(required = true, description = "")
  private ConfigIds configIds = null;
  
  @Schema(required = true, description = "")
  private Integer cpu = null;
  
  @Schema(required = true, description = "")
  private Map<String, Cpu> cpuLi = new HashMap<String, Cpu>();
  
  @Schema(required = true, description = "")
  private ConfigLists configLi = null;
  
  @Schema(description = "")
  private Map<String, FieldLabel> fieldLabel = null;
  
  @Schema(description = "")
  private Map<String, Map<String, CpuWithDefaults>> cpuCores = null;
  
  @Schema(required = true, description = "")
  private Integer frequency = null;
  
  @Schema(required = true, description = "")
  private String currency = null;
  
  @Schema(description = "")
  private String currencySymbol = null;
  
  @Schema(required = true, description = "")
  private String country = null;
  
  @Schema(description = "")
  private Integer custid = null;
  
  @Schema(description = "")
  private String ima = null;
  
  @Schema(required = true, description = "")
  private String step = null;
  
  @Schema(description = "")
  private List<Region> regions = null;
  
  @Schema(description = "")
  private List<AssetServer> assetServers = null;
  
  @Schema(description = "")
  private List<Object> buyItServers = null;
  
  @Schema(description = "")
  private String displayShowmore = null;
  
  @Schema(description = "")
  private BigDecimal custDiscount = null;
 /**
   * Get formValues
   * @return formValues
  **/
  @JsonProperty("form_values")
  @NotNull
  public FormValues getFormValues() {
    return formValues;
  }

  public void setFormValues(FormValues formValues) {
    this.formValues = formValues;
  }

  public ServerOrderGetResponse formValues(FormValues formValues) {
    this.formValues = formValues;
    return this;
  }

 /**
   * Get configIds
   * @return configIds
  **/
  @JsonProperty("config_ids")
  @NotNull
  public ConfigIds getConfigIds() {
    return configIds;
  }

  public void setConfigIds(ConfigIds configIds) {
    this.configIds = configIds;
  }

  public ServerOrderGetResponse configIds(ConfigIds configIds) {
    this.configIds = configIds;
    return this;
  }

 /**
   * Get cpu
   * @return cpu
  **/
  @JsonProperty("cpu")
  @NotNull
  public Integer getCpu() {
    return cpu;
  }

  public void setCpu(Integer cpu) {
    this.cpu = cpu;
  }

  public ServerOrderGetResponse cpu(Integer cpu) {
    this.cpu = cpu;
    return this;
  }

 /**
   * Get cpuLi
   * @return cpuLi
  **/
  @JsonProperty("cpu_li")
  @NotNull
  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }

  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  public ServerOrderGetResponse cpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

  public ServerOrderGetResponse putCpuLiItem(String key, Cpu cpuLiItem) {
    this.cpuLi.put(key, cpuLiItem);
    return this;
  }

 /**
   * Get configLi
   * @return configLi
  **/
  @JsonProperty("config_li")
  @NotNull
  public ConfigLists getConfigLi() {
    return configLi;
  }

  public void setConfigLi(ConfigLists configLi) {
    this.configLi = configLi;
  }

  public ServerOrderGetResponse configLi(ConfigLists configLi) {
    this.configLi = configLi;
    return this;
  }

 /**
   * Get fieldLabel
   * @return fieldLabel
  **/
  @JsonProperty("field_label")
  @NotNull
  public Map<String, FieldLabel> getFieldLabel() {
    return fieldLabel;
  }

  public void setFieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  public ServerOrderGetResponse fieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
    return this;
  }

  public ServerOrderGetResponse putFieldLabelItem(String key, FieldLabel fieldLabelItem) {
    this.fieldLabel.put(key, fieldLabelItem);
    return this;
  }

 /**
   * Get cpuCores
   * @return cpuCores
  **/
  @JsonProperty("cpu_cores")
  @NotNull
  public Map<String, Map<String, CpuWithDefaults>> getCpuCores() {
    return cpuCores;
  }

  public void setCpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
  }

  public ServerOrderGetResponse cpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
    return this;
  }

  public ServerOrderGetResponse putCpuCoresItem(String key, Map<String, CpuWithDefaults> cpuCoresItem) {
    this.cpuCores.put(key, cpuCoresItem);
    return this;
  }

 /**
   * Get frequency
   * @return frequency
  **/
  @JsonProperty("frequency")
  @NotNull
  public Integer getFrequency() {
    return frequency;
  }

  public void setFrequency(Integer frequency) {
    this.frequency = frequency;
  }

  public ServerOrderGetResponse frequency(Integer frequency) {
    this.frequency = frequency;
    return this;
  }

 /**
   * Get currency
   * @return currency
  **/
  @JsonProperty("currency")
  @NotNull
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public ServerOrderGetResponse currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @JsonProperty("currencySymbol")
  @NotNull
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ServerOrderGetResponse currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

 /**
   * Get country
   * @return country
  **/
  @JsonProperty("country")
  @NotNull
  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public ServerOrderGetResponse country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Get custid
   * @return custid
  **/
  @JsonProperty("custid")
  @NotNull
  public Integer getCustid() {
    return custid;
  }

  public void setCustid(Integer custid) {
    this.custid = custid;
  }

  public ServerOrderGetResponse custid(Integer custid) {
    this.custid = custid;
    return this;
  }

 /**
   * Get ima
   * @return ima
  **/
  @JsonProperty("ima")
  @NotNull
  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public ServerOrderGetResponse ima(String ima) {
    this.ima = ima;
    return this;
  }

 /**
   * Get step
   * @return step
  **/
  @JsonProperty("step")
  @NotNull
  public String getStep() {
    return step;
  }

  public void setStep(String step) {
    this.step = step;
  }

  public ServerOrderGetResponse step(String step) {
    this.step = step;
    return this;
  }

 /**
   * Get regions
   * @return regions
  **/
  @JsonProperty("regions")
  @NotNull
  public List<Region> getRegions() {
    return regions;
  }

  public void setRegions(List<Region> regions) {
    this.regions = regions;
  }

  public ServerOrderGetResponse regions(List<Region> regions) {
    this.regions = regions;
    return this;
  }

  public ServerOrderGetResponse addRegionsItem(Region regionsItem) {
    this.regions.add(regionsItem);
    return this;
  }

 /**
   * Get assetServers
   * @return assetServers
  **/
  @JsonProperty("asset_servers")
  @NotNull
  public List<AssetServer> getAssetServers() {
    return assetServers;
  }

  public void setAssetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
  }

  public ServerOrderGetResponse assetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
    return this;
  }

  public ServerOrderGetResponse addAssetServersItem(AssetServer assetServersItem) {
    this.assetServers.add(assetServersItem);
    return this;
  }

 /**
   * Get buyItServers
   * @return buyItServers
  **/
  @JsonProperty("buy_it_servers")
  @NotNull
  public List<Object> getBuyItServers() {
    return buyItServers;
  }

  public void setBuyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
  }

  public ServerOrderGetResponse buyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
    return this;
  }

  public ServerOrderGetResponse addBuyItServersItem(Object buyItServersItem) {
    this.buyItServers.add(buyItServersItem);
    return this;
  }

 /**
   * Get displayShowmore
   * @return displayShowmore
  **/
  @JsonProperty("display_showmore")
  @NotNull
  public String getDisplayShowmore() {
    return displayShowmore;
  }

  public void setDisplayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
  }

  public ServerOrderGetResponse displayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
    return this;
  }

 /**
   * Get custDiscount
   * @return custDiscount
  **/
  @JsonProperty("cust_discount")
  @NotNull
  public BigDecimal getCustDiscount() {
    return custDiscount;
  }

  public void setCustDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
  }

  public ServerOrderGetResponse custDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
