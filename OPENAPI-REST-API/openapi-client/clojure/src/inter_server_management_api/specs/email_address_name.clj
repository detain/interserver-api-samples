(ns inter-server-management-api.specs.email-address-name
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def email-address-name-data
  {
   (ds/req :email) string?
   (ds/opt :name) string?
   })

(def email-address-name-spec
  (ds/spec
    {:name ::email-address-name
     :spec email-address-name-data}))
