(ns inter-server-management-api.specs.login-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.login-service-counts :refer :all]
            )
  (:import (java.io File)))


(def login-info-data
  {
   (ds/req :captcha) string?
   (ds/req :counts) login-service-counts-spec
   (ds/opt :logo) string?
   (ds/opt :language) string?
   })

(def login-info-spec
  (ds/spec
    {:name ::login-info
     :spec login-info-data}))
