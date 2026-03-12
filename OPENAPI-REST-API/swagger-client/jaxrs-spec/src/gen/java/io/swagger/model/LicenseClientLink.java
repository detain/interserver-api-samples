package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LicenseClientLink   {

  private @Valid String label = null;

  private @Valid String link = null;

  private @Valid String icon = null;

  private @Valid String iconText = null;

  private @Valid String helpText = null;

  private @Valid String otherAttr = null;

  /**
   * Link label
   **/
  public LicenseClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  @ApiModelProperty(example = "Invoices", required = true, value = "Link label")
  @JsonProperty("label")
  @NotNull

  public String getLabel() {
    return label;
  }
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * Link URL
   **/
  public LicenseClientLink link(String link) {
    this.link = link;
    return this;
  }

  
  @ApiModelProperty(example = "invoices", required = true, value = "Link URL")
  @JsonProperty("link")
  @NotNull

  public String getLink() {
    return link;
  }
  public void setLink(String link) {
    this.link = link;
  }

  /**
   * Link icon
   **/
  public LicenseClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @ApiModelProperty(example = "fas fa-file-invoice-dollar fa-w-12", required = true, value = "Link icon")
  @JsonProperty("icon")
  @NotNull

  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Icon text
   **/
  public LicenseClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

  
  @ApiModelProperty(value = "Icon text")
  @JsonProperty("icon_text")
  @NotNull

  public String getIconText() {
    return iconText;
  }
  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  /**
   * Help text
   **/
  public LicenseClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

  
  @ApiModelProperty(example = "Invoice History", required = true, value = "Help text")
  @JsonProperty("help_text")
  @NotNull

  public String getHelpText() {
    return helpText;
  }
  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  /**
   * Other attributes
   **/
  public LicenseClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  
  @ApiModelProperty(value = "Other attributes")
  @JsonProperty("other_attr")
  @NotNull

  public String getOtherAttr() {
    return otherAttr;
  }
  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseClientLink licenseClientLink = (LicenseClientLink) o;
    return Objects.equals(label, licenseClientLink.label) &&
        Objects.equals(link, licenseClientLink.link) &&
        Objects.equals(icon, licenseClientLink.icon) &&
        Objects.equals(iconText, licenseClientLink.iconText) &&
        Objects.equals(helpText, licenseClientLink.helpText) &&
        Objects.equals(otherAttr, licenseClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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
