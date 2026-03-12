(ns inter-server-management-api.specs.domain-tech-contact
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-tech-contact-data
  {
   (ds/opt :state) string?
   (ds/opt :status) string?
   (ds/opt :org_name) string?
   (ds/opt :country) string?
   (ds/opt :postal_code) string?
   (ds/opt :fax) string?
   (ds/opt :email) string?
   (ds/opt :address2) string?
   (ds/opt :address3) string?
   (ds/opt :address1) string?
   (ds/opt :city) string?
   (ds/opt :phone) string?
   (ds/opt :first_name) string?
   (ds/opt :last_name) string?
   })

(def domain-tech-contact-spec
  (ds/spec
    {:name ::domain-tech-contact
     :spec domain-tech-contact-data}))
