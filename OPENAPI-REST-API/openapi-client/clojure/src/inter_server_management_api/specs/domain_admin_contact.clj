(ns inter-server-management-api.specs.domain-admin-contact
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-admin-contact-data
  {
   (ds/opt :status) string?
   (ds/opt :state) string?
   (ds/opt :org_name) string?
   (ds/opt :country) string?
   (ds/opt :postal_code) string?
   (ds/opt :email) string?
   (ds/opt :fax) string?
   (ds/opt :address2) string?
   (ds/opt :address3) string?
   (ds/opt :address1) string?
   (ds/opt :city) string?
   (ds/opt :phone) string?
   (ds/opt :first_name) string?
   (ds/opt :last_name) string?
   })

(def domain-admin-contact-spec
  (ds/spec
    {:name ::domain-admin-contact
     :spec domain-admin-contact-data}))
