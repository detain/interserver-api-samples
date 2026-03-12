package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class LicenseClientLink   {
  @JsonProperty("label")
  private String label = null;
  @JsonProperty("link")
  private String link = null;
  @JsonProperty("icon")
  private String icon = null;
  @JsonProperty("icon_text")
  private String iconText = null;
  @JsonProperty("help_text")
  private String helpText = null;
  @JsonProperty("other_attr")
  private String otherAttr = null;
  /**
   * Link label
   **/
  public LicenseClientLink label(String label) {
    this.label = label;
    return this;
  }

  
  @Schema(example = "Invoices", required = true, description = "Link label")
  @JsonProperty("label")
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

  
  @Schema(example = "invoices", required = true, description = "Link URL")
  @JsonProperty("link")
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

  
  @Schema(example = "fas fa-file-invoice-dollar fa-w-12", required = true, description = "Link icon")
  @JsonProperty("icon")
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

  
  @Schema(description = "Icon text")
  @JsonProperty("icon_text")
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

  
  @Schema(example = "Invoice History", required = true, description = "Help text")
  @JsonProperty("help_text")
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

  
  @Schema(description = "Other attributes")
  @JsonProperty("other_attr")
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
