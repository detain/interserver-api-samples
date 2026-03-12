(ns inter-server-management-api.specs.login-error-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def login-error-response-data
  {
   (ds/opt :message) string?
   (ds/opt :field) string?
   })

(def login-error-response-spec
  (ds/spec
    {:name ::login-error-response
     :spec login-error-response-data}))
