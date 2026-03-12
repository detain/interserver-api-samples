(ns inter-server-management-api.specs.password-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def password-request-data
  {
   (ds/req :password) string?
   })

(def password-request-spec
  (ds/spec
    {:name ::password-request
     :spec password-request-data}))
