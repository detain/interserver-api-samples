(ns inter-server-management-api.specs.login-submission-example-g-recaptcha-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.login-submission-example-g-recaptcha-response-dep :refer :all]
            )
  (:import (java.io File)))


(def login-submission-example-g-recaptcha-response-data
  {
   (ds/opt :__v_isShallow) boolean?
   (ds/opt :dep) login-submission-example-g-recaptcha-response-dep-spec
   (ds/opt :__v_isRef) boolean?
   (ds/opt :_rawValue) string?
   (ds/opt :_value) string?
   })

(def login-submission-example-g-recaptcha-response-spec
  (ds/spec
    {:name ::login-submission-example-g-recaptcha-response
     :spec login-submission-example-g-recaptcha-response-data}))
