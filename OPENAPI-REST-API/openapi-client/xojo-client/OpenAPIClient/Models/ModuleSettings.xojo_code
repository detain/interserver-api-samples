#tag Class
Protected Class ModuleSettings

	#tag Property, Flags = &h0
		SERVICE_ID_OFFSET As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		USE_REPEAT_INVOICE As Boolean
	#tag EndProperty


	#tag Property, Flags = &h0
		USE_PACKAGES As Boolean
	#tag EndProperty


	#tag Property, Flags = &h0
		BILLING_DAYS_OFFSET As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		IMGNAME As String
	#tag EndProperty


	#tag Property, Flags = &h0
		REPEAT_BILLING_METHOD As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		DELETE_PENDING_DAYS As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		SUSPEND_DAYS As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		SUSPEND_WARNING_DAYS As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		TITLE As String
	#tag EndProperty


	#tag Property, Flags = &h0
		MENUNAME As String
	#tag EndProperty


	#tag Property, Flags = &h0
		EMAIL_FROM As String
	#tag EndProperty


	#tag Property, Flags = &h0
		TBLNAME As String
	#tag EndProperty


	#tag Property, Flags = &h0
		TABLE As String
	#tag EndProperty


	#tag Property, Flags = &h0
		TITLE_FIELD As String
	#tag EndProperty


	#tag Property, Flags = &h0
		PREFIX As String
	#tag EndProperty


	#tag Property, Flags = &h0
		TITLE_FIELD2 As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		TITLE_FIELD3 As Xoson.O.OptionalString
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
			Name="SERVICE_ID_OFFSET"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="USE_REPEAT_INVOICE"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="USE_PACKAGES"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="BILLING_DAYS_OFFSET"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="IMGNAME"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="REPEAT_BILLING_METHOD"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="DELETE_PENDING_DAYS"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="SUSPEND_DAYS"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="SUSPEND_WARNING_DAYS"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="TITLE"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="MENUNAME"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="EMAIL_FROM"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="TBLNAME"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="TABLE"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="TITLE_FIELD"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="PREFIX"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="TITLE_FIELD2"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="TITLE_FIELD3"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


