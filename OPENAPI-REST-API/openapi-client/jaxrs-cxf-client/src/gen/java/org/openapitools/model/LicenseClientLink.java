package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class LicenseClientLink  {
  
 /**
  * Link label
  */
  @ApiModelProperty(example = "Invoices", required = true, value = "Link label")

  private String label;

 /**
  * Link URL
  */
  @ApiModelProperty(example = "invoices", required = true, value = "Link URL")

  private String link;

 /**
  * Link icon
  */
  @ApiModelProperty(example = "fas fa-file-invoice-dollar fa-w-12", required = true, value = "Link icon")

  private String icon;

 /**
  * Help text
  */
  @ApiModelProperty(example = "Invoice History", required = true, value = "Help text")

  private String helpText;

 /**
  * Icon text
  */
  @ApiModelProperty(example = "", value = "Icon text")

  private String iconText;

 /**
  * Other attributes
  */
  @ApiModelProperty(example = "", value = "Other attributes")

  private String otherAttr;
 /**
   * Link label
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public LicenseClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Link URL
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public LicenseClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Link icon
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public LicenseClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Help text
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public LicenseClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Icon text
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public LicenseClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Other attributes
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public LicenseClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    LicenseClientLink licenseClientLink = (LicenseClientLink) o;
    return Objects.equals(this.label, licenseClientLink.label) &&
        Objects.equals(this.link, licenseClientLink.link) &&
        Objects.equals(this.icon, licenseClientLink.icon) &&
        Objects.equals(this.helpText, licenseClientLink.helpText) &&
        Objects.equals(this.iconText, licenseClientLink.iconText) &&
        Objects.equals(this.otherAttr, licenseClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, helpText, iconText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class LicenseClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

