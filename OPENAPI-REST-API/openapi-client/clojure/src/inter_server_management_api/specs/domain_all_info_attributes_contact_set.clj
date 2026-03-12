(ns inter-server-management-api.specs.domain-all-info-attributes-contact-set
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.domain-owner-contact :refer :all]
            [inter-server-management-api.specs.domain-admin-contact :refer :all]
            [inter-server-management-api.specs.domain-tech-contact :refer :all]
            )
  (:import (java.io File)))


(def domain-all-info-attributes-contact-set-data
  {
   (ds/opt :owner) domain-owner-contact-spec
   (ds/opt :admin) domain-admin-contact-spec
   (ds/opt :tech) domain-tech-contact-spec
   })

(def domain-all-info-attributes-contact-set-spec
  (ds/spec
    {:name ::domain-all-info-attributes-contact-set
     :spec domain-all-info-attributes-contact-set-data}))
