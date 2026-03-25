#tag Class
Protected Class HomeDetailsModules

	#tag Property, Flags = &h0
		domains As OpenAPIClient.Models.HomeDetailsModulesDomains
	#tag EndProperty


	#tag Property, Flags = &h0
		webhosting As OpenAPIClient.Models.HomeDetailsModulesWebhosting
	#tag EndProperty


	#tag Property, Flags = &h0
		vps As OpenAPIClient.Models.HomeDetailsModulesVps
	#tag EndProperty


	#tag Property, Flags = &h0
		licenses As OpenAPIClient.Models.HomeDetailsModulesLicenses
	#tag EndProperty


	#tag Property, Flags = &h0
		backups As OpenAPIClient.Models.HomeDetailsModulesBackups
	#tag EndProperty


	#tag Property, Flags = &h0
		servers As OpenAPIClient.Models.HomeDetailsModulesServers
	#tag EndProperty


	#tag Property, Flags = &h0
		quickservers As OpenAPIClient.Models.HomeDetailsModulesQuickservers
	#tag EndProperty





	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domains"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesDomains"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="webhosting"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesWebhosting"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vps"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesVps"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="licenses"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesLicenses"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="backups"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesBackups"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="servers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesServers"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="quickservers"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetailsModulesQuickservers"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


